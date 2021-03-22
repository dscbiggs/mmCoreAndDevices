/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.0
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_MMCoreJ_WRAP_H_
#define SWIG_MMCoreJ_WRAP_H_

class SwigDirector_MMEventCallback : public MMEventCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MMEventCallback(JNIEnv *jenv);
    virtual ~SwigDirector_MMEventCallback();
    virtual void onPropertiesChanged();
    virtual void onPropertyChanged(char const *name, char const *propName, char const *propValue);
    virtual void onChannelGroupChanged(char const *newChannelGroupName);
    virtual void onConfigGroupChanged(char const *groupName, char const *newConfigName);
    virtual void onSystemConfigurationLoaded();
    virtual void onPixelSizeChanged(double newPixelSizeUm);
    virtual void onPixelSizeAffineChanged(double v0, double v1, double v2, double v3, double v4, double v5);
    virtual void onStagePositionChanged(char *name, double pos);
    virtual void onXYStagePositionChanged(char *name, double xpos, double ypos);
    virtual void onExposureChanged(char *name, double newExposure);
    virtual void onSLMExposureChanged(char *name, double newExposure);
public:
    bool swig_overrides(int n) {
      return (n < 11 ? swig_override[n] : false);
    }
protected:
    bool swig_override[11];
};


#endif