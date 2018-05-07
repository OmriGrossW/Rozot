//#line 2 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
// 
// File autogenerated for the robotican_hardware_interface package 
// by the dynamic_reconfigure package.
// Please do not edit.
// 
// ********************************************************/

#ifndef __robotican_hardware_interface__RICBOARDCONFIG_H__
#define __robotican_hardware_interface__RICBOARDCONFIG_H__

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace robotican_hardware_interface
{
  class RiCBoardConfigStatics;
  
  class RiCBoardConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l, 
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }
      
      virtual void clamp(RiCBoardConfig &config, const RiCBoardConfig &max, const RiCBoardConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const RiCBoardConfig &config1, const RiCBoardConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, RiCBoardConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const RiCBoardConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, RiCBoardConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const RiCBoardConfig &config) const = 0;
      virtual void getValue(const RiCBoardConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;
    
    template <class T>
    class ParamDescription : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string name, std::string type, uint32_t level, 
          std::string description, std::string edit_method, T RiCBoardConfig::* f) :
        AbstractParamDescription(name, type, level, description, edit_method),
        field(f)
      {}

      T (RiCBoardConfig::* field);

      virtual void clamp(RiCBoardConfig &config, const RiCBoardConfig &max, const RiCBoardConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;
        
        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const RiCBoardConfig &config1, const RiCBoardConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, RiCBoardConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const RiCBoardConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, RiCBoardConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const RiCBoardConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const RiCBoardConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, RiCBoardConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    template<class T, class PT>
    class GroupDescription : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string name, std::string type, int parent, int id, bool s, T PT::* f) : AbstractGroupDescription(name, type, parent, id, s), field(f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, RiCBoardConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T (PT::* field);
      std::vector<RiCBoardConfig::AbstractGroupDescriptionConstPtr> groups;
    };
    
class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(RiCBoardConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("motor_speed_lpf_hz"==(*_i)->name){motor_speed_lpf_hz = boost::any_cast<int>(val);}
        if("motor_input_lpf_hz"==(*_i)->name){motor_input_lpf_hz = boost::any_cast<int>(val);}
        if("motor_speed_lpf_alpha"==(*_i)->name){motor_speed_lpf_alpha = boost::any_cast<double>(val);}
        if("motor_input_lpf_alpha"==(*_i)->name){motor_input_lpf_alpha = boost::any_cast<double>(val);}
        if("motor_pid_hz"==(*_i)->name){motor_pid_hz = boost::any_cast<int>(val);}
        if("motor_kp"==(*_i)->name){motor_kp = boost::any_cast<double>(val);}
        if("motor_ki"==(*_i)->name){motor_ki = boost::any_cast<double>(val);}
        if("motor_kd"==(*_i)->name){motor_kd = boost::any_cast<double>(val);}
        if("motor_kff"==(*_i)->name){motor_kff = boost::any_cast<double>(val);}
        if("motor_limit"==(*_i)->name){motor_limit = boost::any_cast<double>(val);}
      }
    }

    int motor_speed_lpf_hz;
int motor_input_lpf_hz;
double motor_speed_lpf_alpha;
double motor_input_lpf_alpha;
int motor_pid_hz;
double motor_kp;
double motor_ki;
double motor_kd;
double motor_kff;
double motor_limit;

    bool state;
    std::string name;

    
}groups;



//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int motor_speed_lpf_hz;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int motor_input_lpf_hz;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double motor_speed_lpf_alpha;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double motor_input_lpf_alpha;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int motor_pid_hz;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double motor_kp;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double motor_ki;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double motor_kd;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double motor_kff;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double motor_limit;
//#line 218 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("RiCBoardConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }
    
    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }
    
    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const RiCBoardConfig &__max__ = __getMax__();
      const RiCBoardConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const RiCBoardConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }
    
    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const RiCBoardConfig &__getDefault__();
    static const RiCBoardConfig &__getMax__();
    static const RiCBoardConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();
    
  private:
    static const RiCBoardConfigStatics *__get_statics__();
  };
  
  template <> // Max and min are ignored for strings.
  inline void RiCBoardConfig::ParamDescription<std::string>::clamp(RiCBoardConfig &config, const RiCBoardConfig &max, const RiCBoardConfig &min) const
  {
    return;
  }

  class RiCBoardConfigStatics
  {
    friend class RiCBoardConfig;
    
    RiCBoardConfigStatics()
    {
RiCBoardConfig::GroupDescription<RiCBoardConfig::DEFAULT, RiCBoardConfig> Default("Default", "", 0, 0, true, &RiCBoardConfig::groups);
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_speed_lpf_hz = 10;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_speed_lpf_hz = 1000;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_speed_lpf_hz = 63;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<int>("motor_speed_lpf_hz", "int", 0, "motor speed lpf loop hz", "", &RiCBoardConfig::motor_speed_lpf_hz)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<int>("motor_speed_lpf_hz", "int", 0, "motor speed lpf loop hz", "", &RiCBoardConfig::motor_speed_lpf_hz)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_input_lpf_hz = 10;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_input_lpf_hz = 1000;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_input_lpf_hz = 63;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<int>("motor_input_lpf_hz", "int", 0, "motor input lpf loop hz", "", &RiCBoardConfig::motor_input_lpf_hz)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<int>("motor_input_lpf_hz", "int", 0, "motor input lpf loop hz", "", &RiCBoardConfig::motor_input_lpf_hz)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_speed_lpf_alpha = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_speed_lpf_alpha = 1.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_speed_lpf_alpha = 0.21;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_speed_lpf_alpha", "double", 0, "motor speed lpf alpha", "", &RiCBoardConfig::motor_speed_lpf_alpha)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_speed_lpf_alpha", "double", 0, "motor speed lpf alpha", "", &RiCBoardConfig::motor_speed_lpf_alpha)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_input_lpf_alpha = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_input_lpf_alpha = 1.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_input_lpf_alpha = 0.21;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_input_lpf_alpha", "double", 0, "motor input lpf alpha", "", &RiCBoardConfig::motor_input_lpf_alpha)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_input_lpf_alpha", "double", 0, "motor input lpf alpha", "", &RiCBoardConfig::motor_input_lpf_alpha)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_pid_hz = 1000;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_pid_hz = 2000;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_pid_hz = 1000;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<int>("motor_pid_hz", "int", 0, "motor pid loop hz", "", &RiCBoardConfig::motor_pid_hz)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<int>("motor_pid_hz", "int", 0, "motor pid loop hz", "", &RiCBoardConfig::motor_pid_hz)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_kp = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_kp = 1000.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_kp = 2.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_kp", "double", 0, "motor kp", "", &RiCBoardConfig::motor_kp)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_kp", "double", 0, "motor kp", "", &RiCBoardConfig::motor_kp)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_ki = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_ki = 1000.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_ki = 12.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_ki", "double", 0, "motor ki", "", &RiCBoardConfig::motor_ki)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_ki", "double", 0, "motor ki", "", &RiCBoardConfig::motor_ki)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_kd = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_kd = 1000.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_kd = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_kd", "double", 0, "motor kd", "", &RiCBoardConfig::motor_kd)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_kd", "double", 0, "motor kd", "", &RiCBoardConfig::motor_kd)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_kff = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_kff = 1000.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_kff = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_kff", "double", 0, "motor kff", "", &RiCBoardConfig::motor_kff)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_kff", "double", 0, "motor kff", "", &RiCBoardConfig::motor_kff)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.motor_limit = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.motor_limit = 1.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.motor_limit = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_limit", "double", 0, "motor integral limit", "", &RiCBoardConfig::motor_limit)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(RiCBoardConfig::AbstractParamDescriptionConstPtr(new RiCBoardConfig::ParamDescription<double>("motor_limit", "double", 0, "motor integral limit", "", &RiCBoardConfig::motor_limit)));
//#line 235 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 235 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(RiCBoardConfig::AbstractGroupDescriptionConstPtr(new RiCBoardConfig::GroupDescription<RiCBoardConfig::DEFAULT, RiCBoardConfig>(Default)));
//#line 353 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<RiCBoardConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__); 
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__); 
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__); 
    }
    std::vector<RiCBoardConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<RiCBoardConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    RiCBoardConfig __max__;
    RiCBoardConfig __min__;
    RiCBoardConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const RiCBoardConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static RiCBoardConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &RiCBoardConfig::__getDescriptionMessage__() 
  {
    return __get_statics__()->__description_message__;
  }

  inline const RiCBoardConfig &RiCBoardConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }
  
  inline const RiCBoardConfig &RiCBoardConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }
  
  inline const RiCBoardConfig &RiCBoardConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }
  
  inline const std::vector<RiCBoardConfig::AbstractParamDescriptionConstPtr> &RiCBoardConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<RiCBoardConfig::AbstractGroupDescriptionConstPtr> &RiCBoardConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const RiCBoardConfigStatics *RiCBoardConfig::__get_statics__()
  {
    const static RiCBoardConfigStatics *statics;
  
    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = RiCBoardConfigStatics::get_instance();
    
    return statics;
  }


}

#endif // __RICBOARDRECONFIGURATOR_H__
