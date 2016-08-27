#ifndef DD_LOG_HELPER
#define DD_LOG_HELPER

#include <cstdio>
// Change these according to the target architecture.
// We just use stdout and stderr as default targets.
#define  DD_LOGD(...)  fprintf(stdout, "DEBUG:"); fprintf(stdout, __VA_ARGS__); fprintf(stdout, "\n")
#define  DD_LOGI(...)  fprintf(stdout, "INFO:"); fprintf(stdout, __VA_ARGS__); fprintf(stdout, "\n")
#define  DD_LOGW(...)  fprintf(stderr, "WARN:"); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n")
#define  DD_LOGE(...)  fprintf(stderr, "ERROR:"); fprintf(stderr, __VA_ARGS__); fprintf(stderr, "\n")

#endif
