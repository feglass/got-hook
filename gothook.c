#include <stdio.h>
#include <jni.h>
#include <android/log.h>
#include <assert.h>

#define LOG_TAG "ccc"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

void __attribute__((constructor)) my_init(void);

void my_init(void) {
	LOGI("ccc");
	
}

uint32_t get_so_address(char *so_path, uint32_t pid) {
	char *map_path;
	 i = snprintf(map_path, 30, "/proc/%d/maps", pid);
	
}