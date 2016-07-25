
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_LDLIBS += -L$(SYSROOT)/usr/lib -llog   
LOCAL_CFLAGS += -pie -fPIE
LOCAL_LDFLAGS += -pie -fPIE -shared
LOCAL_MODULE    := gothook
LOCAL_SRC_FILES := gothook.c 
LOCAL_ARM_MODE := arm
LOCAL_CFLAGS := -g

include $(BUILD_SHARED_LIBRARY) 