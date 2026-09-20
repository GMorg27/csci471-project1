#ifndef HEADER_H
#define HEADER_H

#include <cstring>
#include <iostream>
#include <fstream>
#include <regex>
#include <string>

#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#include "logging.h"

#define GET 1
#define HEAD 2
#define POST 3

inline int BUFFER_SIZE = 10;
inline int DEFAULT_PORT = 1701;

inline const std::regex HTTP_GET_PATTERN(R"(^GET\s+([^?\s]+)(?:\?\S*)?\s+(HTTP\/[\d.]+)\r\n$)");
inline const std::regex HTML_FILENAME_PATTERN(R"(^\/?(file[0-9]\.html)$)");
inline const std::regex IMAGE_FILENAME_PATTERN(R"(^\/?(image[0-9]\.jpg)$)");

#endif
