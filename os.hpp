// Copyright (c) 2021 Beatrieziz

#ifdef _WIN32
#define PROG "start"
#endif

#ifdef __linux__
#define PROG "xdg-open"
#endif

#ifdef __APPLE__
#define PROG "open"
#endif