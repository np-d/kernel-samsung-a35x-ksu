#ifndef IS_VENDOR_CONFIG_STW_V60_H
#define IS_VENDOR_CONFIG_STW_V60_H

#define USE_CAMERA_HEAP
#ifdef USE_CAMERA_HEAP
#define CAMERA_HEAP_NAME        "camera"
#define CAMERA_HEAP_NAME_LEN    6
#define CAMERA_HEAP_UNCACHED_NAME       "camera-uncached"
#define CAMERA_HEAP_UNCACHED_NAME_LEN   15
#define CAMERA_HEAP_RESERVE_MEM_SIZE 0x4900000 //73MB
#endif

#define VENDER_PATH

/***** HW DEFENDANT DEFINE *****/
#define DISABLE_DUAL_SYNC

/***** SUPPORT CAMERA DEFINE *****/
#define IS_VENDOR_SENSOR_COUNT 3                            /* REAR_0, FRONT_0, REAR_2, REAR_3 */

#define REAR_ULTRA_WIDE_CAMERA   (SENSOR_POSITION_REAR3)    /* Supported Camera Type for rear ultra wide */

#define CAMERA_REAR2             (REAR_ULTRA_WIDE_CAMERA)   /* For Rear2 of SYSFS */

#define CAMERA_REAR2_MODULEID
#define CAMERA_REAR_DUAL_CAL
#define CAMERA_FRONT_FIXED_FOCUS

#define READ_DUAL_CAL_FIRMWARE_DATA

#ifdef USE_KERNEL_VFS_READ_WRITE
#define DUAL_CAL_DATA_PATH "/vendor/firmware/SetMultiCalInfo.bin"
#else
#define DUAL_CAL_DATA_PATH "/vendor/firmware/"
#define DUAL_CAL_DATA_BIN_NAME "SetMultiCalInfo.bin"
#endif

// #define CONFIG_CAMERA_EEPROM_DUALIZED
#define DUAL_CAL_DATA_SIZE_DEFAULT (0x080C)

#define CONFIG_SEC_CAL_ENABLE
#define IS_REAR_MAX_CAL_SIZE (0x1E90)
#define IS_FRONT_MAX_CAL_SIZE (0x1AC0)
#define IS_REAR2_MAX_CAL_SIZE (0x1AC0)

#define CONFIG_SECURE_CAMERA_USE 0
#define USE_CAMERA_SENSOR_RETENTION 0

#define CAMERA_EEPROM_SUPPORT_FRONT
/* For Dualization sensor check */
#define USE_CAMERA_CHECK_SENSOR_REV

#define CAMERA_STANDARD_CAL_ISP_VERSION 'E'

#define USES_STANDARD_CAL_RELOAD
#define USE_PERSISTENT_DEVICE_PROPERTIES_FOR_CAL /* For cal reload */

//#define WIDE_OIS_ROM_ID ROM_ID_REAR

#endif /* IS_VENDOR_CONFIG_STW_V60_H */