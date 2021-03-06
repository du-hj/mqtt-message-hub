/*
 *  File: devicesn.c
 *  This file is a part of mqttmsghub
 *
 *  Created by Du Hongjun on 2017/06.
 *  Copyright 2018 All rights reserved.
 */

#include "devicesn.h"
#include <unistd.h>
#include <string.h>
#include <memory.h>
#include "sysutils.h"
#include "stringutils.h"

static char g_deviceSN[64] = { 0 };
char *get_device_sn()
{
    printf("get_device_sn\n");

    if (string_is_empty(g_deviceSN)) {
        strcpy(g_deviceSN, "SN0000000001");
        string_upper_case(g_deviceSN);
    }

    printf("cached sn: %s\n", g_deviceSN);

    return g_deviceSN;
}