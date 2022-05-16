/*****************************************************************************
 *
 * Filename:
 * ---------
 *	 OV16A1QQTECHmipi_Sensor.h
 *
 * Project:
 * --------
 *	 ALPS
 *	PengtaoFan
 * Description:
 * ------------
 *	 CMOS sensor header file
 *
 ****************************************************************************/
#ifndef _OV16A1QQTECHMIPI_SENSOR_H
#define _OV16A1QQTECHMIPI_SENSOR_H
#include <linux/types.h>
#include "kd_camera_typedef.h" //add by wei.wang2 for IN2

static kal_uint16 ov16a1qqtech_init_setting[] = {
	0x0103, 0x01,
	0x0102, 0x00,
	0x0301, 0x48,
	0x0302, 0x31,
	0x0303, 0x04,
	0x0305, 0xc2,
	0x0306, 0x00,
	0x0320, 0x02,
	0x0323, 0x04,
	0x0326, 0xd8,
	0x0327, 0x0b,
	0x0329, 0x01,
	0x0343, 0x04,
	0x0344, 0x01,
	0x0345, 0x2c,
	0x0346, 0xc0,
	0x034a, 0x07,
	0x300e, 0x22,
	0x3012, 0x41,
	0x3016, 0xd2,
	0x3018, 0x70,
	0x301e, 0x98,
	0x3025, 0x03,
	0x3026, 0x10,
	0x3027, 0x08,
	0x3102, 0x00,
	0x3400, 0x04,
	0x3406, 0x04,
	0x3408, 0x04,
	0x3421, 0x09,
	0x3422, 0x20,
	0x3423, 0x15,
	0x3424, 0x40,
	0x3425, 0x14,
	0x3426, 0x04,
	0x3504, 0x08,
	0x3508, 0x01,
	0x3509, 0x00,
	0x350a, 0x01,
	0x350b, 0x00,
	0x350c, 0x00,
	0x3548, 0x01,
	0x3549, 0x00,
	0x354a, 0x01,
	0x354b, 0x00,
	0x354c, 0x00,
	0x3600, 0xff,
	0x3602, 0x42,
	0x3603, 0x7b,
	0x3608, 0x9b,
	0x360a, 0x69,
	0x360b, 0x53,
	0x3618, 0xc0,
	0x361a, 0x8b,
	0x361d, 0x20,
	0x361e, 0x30,
	0x361f, 0x01,
	0x3620, 0x89,
	0x3624, 0x8f,
	0x3629, 0x09,
	0x362e, 0x50,
	0x3631, 0xe2,
	0x3632, 0xe2,
	0x3634, 0x10,
	0x3635, 0x10,
	0x3636, 0x10,
	0x3639, 0xa6,
	0x363a, 0xaa,
	0x363b, 0x0c,
	0x363c, 0x16,
	0x363d, 0x29,
	0x363e, 0x4f,
	0x3642, 0xa8,
	0x3652, 0x00,
	0x3653, 0x00,
	0x3654, 0x8a,
	0x3656, 0x0c,
	0x3657, 0x8e,
	0x3660, 0x80,
	0x3663, 0x00,
	0x3664, 0x00,
	0x3668, 0x05,
	0x3669, 0x05,
	0x370d, 0x10,
	0x370e, 0x05,
	0x370f, 0x10,
	0x3711, 0x01,
	0x3712, 0x09,
	0x3713, 0x40,
	0x3714, 0xe4,
	0x3716, 0x04,
	0x3717, 0x01,
	0x3718, 0x02,
	0x3719, 0x01,
	0x371a, 0x02,
	0x371b, 0x02,
	0x371c, 0x01,
	0x371d, 0x02,
	0x371e, 0x12,
	0x371f, 0x02,
	0x3720, 0x14,
	0x3721, 0x12,
	0x3722, 0x44,
	0x3723, 0x60,
	0x372f, 0x34,
	0x3726, 0x21,
	0x37d0, 0x02,
	0x37d1, 0x10,
	0x37db, 0x08,
	0x3808, 0x12,
	0x3809, 0x30,
	0x380a, 0x0d,
	0x380b, 0xa8,
	0x380c, 0x03,
	0x380d, 0x52,
	0x380e, 0x0f,
	0x380f, 0x50,
	0x3814, 0x11,
	0x3815, 0x11,
	0x3820, 0x00,
	0x3821, 0x06,
	0x3822, 0x00,
	0x3823, 0x04,
	0x3837, 0x10,
	0x383c, 0x34,
	0x383d, 0xff,
	0x383e, 0x0d,
	0x383f, 0x22,
	0x3857, 0x00,
	0x388f, 0x00,
	0x3890, 0x00,
	0x3891, 0x00,
	0x3d81, 0x10,
	0x3d83, 0x0c,
	0x3d84, 0x00,
	0x3d85, 0x1b,
	0x3d88, 0x00,
	0x3d89, 0x00,
	0x3d8a, 0x00,
	0x3d8b, 0x01,
	0x3d8c, 0x77,
	0x3d8d, 0xa0,
	0x3f00, 0x02,
	0x3f0c, 0x07,
	0x3f0d, 0x2f,
	0x4012, 0x0d,
	0x4015, 0x04,
	0x4016, 0x1b,
	0x4017, 0x04,
	0x4018, 0x0b,
	0x401b, 0x1f,
	0x401e, 0x01,
	0x401f, 0x38,
	0x4500, 0x20,
	0x4501, 0x6a,
	0x4502, 0xb4,
	0x4586, 0x00,
	0x4588, 0x02,
	0x4640, 0x01,
	0x4641, 0x04,
	0x4643, 0x00,
	0x4645, 0x03,
	0x4806, 0x40,
	0x480e, 0x00,
	0x4815, 0x2b,
	0x481b, 0x3c,
	0x4833, 0x18,
	0x4837, 0x08,
	0x484b, 0x07,
	0x4850, 0x41,
	0x4860, 0x00,
	0x4861, 0xec,
	0x4864, 0x00,
	0x4883, 0x00,
	0x4888, 0x10,
	0x4a00, 0x10,
	0x4e00, 0x00,
	0x4e01, 0x04,
	0x4e02, 0x01,
	0x4e03, 0x00,
	0x4e04, 0x08,
	0x4e05, 0x04,
	0x4e06, 0x00,
	0x4e07, 0x13,
	0x4e08, 0x01,
	0x4e09, 0x00,
	0x4e0a, 0x15,
	0x4e0b, 0x0e,
	0x4e0c, 0x00,
	0x4e0d, 0x17,
	0x4e0e, 0x07,
	0x4e0f, 0x00,
	0x4e10, 0x19,
	0x4e11, 0x06,
	0x4e12, 0x00,
	0x4e13, 0x1b,
	0x4e14, 0x08,
	0x4e15, 0x00,
	0x4e16, 0x1f,
	0x4e17, 0x08,
	0x4e18, 0x00,
	0x4e19, 0x21,
	0x4e1a, 0x0e,
	0x4e1b, 0x00,
	0x4e1c, 0x2d,
	0x4e1d, 0x30,
	0x4e1e, 0x00,
	0x4e1f, 0x6a,
	0x4e20, 0x05,
	0x4e21, 0x00,
	0x4e22, 0x6c,
	0x4e23, 0x05,
	0x4e24, 0x00,
	0x4e25, 0x6e,
	0x4e26, 0x39,
	0x4e27, 0x00,
	0x4e28, 0x7a,
	0x4e29, 0x6d,
	0x4e2a, 0x00,
	0x4e2b, 0x00,
	0x4e2c, 0x00,
	0x4e2d, 0x00,
	0x4e2e, 0x00,
	0x4e2f, 0x00,
	0x4e30, 0x00,
	0x4e31, 0x00,
	0x4e32, 0x00,
	0x4e33, 0x00,
	0x4e34, 0x00,
	0x4e35, 0x00,
	0x4e36, 0x00,
	0x4e37, 0x00,
	0x4e38, 0x00,
	0x4e39, 0x00,
	0x4e3a, 0x00,
	0x4e3b, 0x00,
	0x4e3c, 0x00,
	0x4e3d, 0x00,
	0x4e3e, 0x00,
	0x4e3f, 0x00,
	0x4e40, 0x00,
	0x4e41, 0x00,
	0x4e42, 0x00,
	0x4e43, 0x00,
	0x4e44, 0x00,
	0x4e45, 0x00,
	0x4e46, 0x00,
	0x4e47, 0x00,
	0x4e48, 0x00,
	0x4e49, 0x00,
	0x4e4a, 0x00,
	0x4e4b, 0x00,
	0x4e4c, 0x00,
	0x4e4d, 0x00,
	0x4e4e, 0x00,
	0x4e4f, 0x00,
	0x4e50, 0x00,
	0x4e51, 0x00,
	0x4e52, 0x00,
	0x4e53, 0x00,
	0x4e54, 0x00,
	0x4e55, 0x00,
	0x4e56, 0x00,
	0x4e57, 0x00,
	0x4e58, 0x00,
	0x4e59, 0x00,
	0x4e5a, 0x00,
	0x4e5b, 0x00,
	0x4e5c, 0x00,
	0x4e5d, 0x00,
	0x4e5e, 0x00,
	0x4e5f, 0x00,
	0x4e60, 0x00,
	0x4e61, 0x00,
	0x4e62, 0x00,
	0x4e63, 0x00,
	0x4e64, 0x00,
	0x4e65, 0x00,
	0x4e66, 0x00,
	0x4e67, 0x00,
	0x4e68, 0x00,
	0x4e69, 0x00,
	0x4e6a, 0x00,
	0x4e6b, 0x00,
	0x4e6c, 0x00,
	0x4e6d, 0x00,
	0x4e6e, 0x00,
	0x4e6f, 0x00,
	0x4e70, 0x00,
	0x4e71, 0x00,
	0x4e72, 0x00,
	0x4e73, 0x00,
	0x4e74, 0x00,
	0x4e75, 0x00,
	0x4e76, 0x00,
	0x4e77, 0x00,
	0x4e78, 0x1c,
	0x4e79, 0x1e,
	0x4e7a, 0x00,
	0x4e7b, 0x00,
	0x4e7c, 0x2c,
	0x4e7d, 0x2f,
	0x4e7e, 0x79,
	0x4e7f, 0x7b,
	0x4e80, 0x0a,
	0x4e81, 0x31,
	0x4e82, 0x66,
	0x4e83, 0x81,
	0x4e84, 0x03,
	0x4e85, 0x40,
	0x4e86, 0x02,
	0x4e87, 0x09,
	0x4e88, 0x43,
	0x4e89, 0x53,
	0x4e8a, 0x32,
	0x4e8b, 0x67,
	0x4e8c, 0x05,
	0x4e8d, 0x83,
	0x4e8e, 0x00,
	0x4e8f, 0x00,
	0x4e90, 0x00,
	0x4e91, 0x00,
	0x4e92, 0x00,
	0x4e93, 0x00,
	0x4e94, 0x00,
	0x4e95, 0x00,
	0x4e96, 0x00,
	0x4e97, 0x00,
	0x4e98, 0x00,
	0x4e99, 0x00,
	0x4e9a, 0x00,
	0x4e9b, 0x00,
	0x4e9c, 0x00,
	0x4e9d, 0x00,
	0x4e9e, 0x00,
	0x4e9f, 0x00,
	0x4ea0, 0x00,
	0x4ea1, 0x00,
	0x4ea2, 0x00,
	0x4ea3, 0x00,
	0x4ea4, 0x00,
	0x4ea5, 0x00,
	0x4ea6, 0x1e,
	0x4ea7, 0x20,
	0x4ea8, 0x32,
	0x4ea9, 0x6d,
	0x4eaa, 0x18,
	0x4eab, 0x7f,
	0x4eac, 0x00,
	0x4ead, 0x00,
	0x4eae, 0x7c,
	0x4eaf, 0x07,
	0x4eb0, 0x7c,
	0x4eb1, 0x07,
	0x4eb2, 0x07,
	0x4eb3, 0x1c,
	0x4eb4, 0x07,
	0x4eb5, 0x1c,
	0x4eb6, 0x07,
	0x4eb7, 0x1c,
	0x4eb8, 0x07,
	0x4eb9, 0x1c,
	0x4eba, 0x07,
	0x4ebb, 0x14,
	0x4ebc, 0x07,
	0x4ebd, 0x1c,
	0x4ebe, 0x07,
	0x4ebf, 0x1c,
	0x4ec0, 0x07,
	0x4ec1, 0x1c,
	0x4ec2, 0x07,
	0x4ec3, 0x1c,
	0x4ec4, 0x2c,
	0x4ec5, 0x2f,
	0x4ec6, 0x79,
	0x4ec7, 0x7b,
	0x4ec8, 0x7c,
	0x4ec9, 0x07,
	0x4eca, 0x7c,
	0x4ecb, 0x07,
	0x4ecc, 0x00,
	0x4ecd, 0x00,
	0x4ece, 0x07,
	0x4ecf, 0x31,
	0x4ed0, 0x69,
	0x4ed1, 0x7f,
	0x4ed2, 0x67,
	0x4ed3, 0x00,
	0x4ed4, 0x00,
	0x4ed5, 0x00,
	0x4ed6, 0x7c,
	0x4ed7, 0x07,
	0x4ed8, 0x7c,
	0x4ed9, 0x07,
	0x4eda, 0x33,
	0x4edb, 0x7f,
	0x4edc, 0x00,
	0x4edd, 0x16,
	0x4ede, 0x00,
	0x4edf, 0x00,
	0x4ee0, 0x32,
	0x4ee1, 0x70,
	0x4ee2, 0x01,
	0x4ee3, 0x30,
	0x4ee4, 0x22,
	0x4ee5, 0x28,
	0x4ee6, 0x6f,
	0x4ee7, 0x75,
	0x4ee8, 0x00,
	0x4ee9, 0x00,
	0x4eea, 0x30,
	0x4eeb, 0x7f,
	0x4eec, 0x00,
	0x4eed, 0x00,
	0x4eee, 0x00,
	0x4eef, 0x00,
	0x4ef0, 0x69,
	0x4ef1, 0x7f,
	0x4ef2, 0x07,
	0x4ef3, 0x30,
	0x4ef4, 0x32,
	0x4ef5, 0x09,
	0x4ef6, 0x7d,
	0x4ef7, 0x65,
	0x4ef8, 0x00,
	0x4ef9, 0x00,
	0x4efa, 0x00,
	0x4efb, 0x00,
	0x4efc, 0x7f,
	0x4efd, 0x09,
	0x4efe, 0x7f,
	0x4eff, 0x09,
	0x4f00, 0x1e,
	0x4f01, 0x7c,
	0x4f02, 0x7f,
	0x4f03, 0x09,
	0x4f04, 0x7f,
	0x4f05, 0x0b,
	0x4f06, 0x7c,
	0x4f07, 0x02,
	0x4f08, 0x7c,
	0x4f09, 0x02,
	0x4f0a, 0x32,
	0x4f0b, 0x64,
	0x4f0c, 0x32,
	0x4f0d, 0x64,
	0x4f0e, 0x32,
	0x4f0f, 0x64,
	0x4f10, 0x32,
	0x4f11, 0x64,
	0x4f12, 0x31,
	0x4f13, 0x4f,
	0x4f14, 0x83,
	0x4f15, 0x84,
	0x4f16, 0x63,
	0x4f17, 0x64,
	0x4f18, 0x83,
	0x4f19, 0x84,
	0x4f1a, 0x31,
	0x4f1b, 0x32,
	0x4f1c, 0x7b,
	0x4f1d, 0x7c,
	0x4f1e, 0x2f,
	0x4f1f, 0x30,
	0x4f20, 0x30,
	0x4f21, 0x69,
	0x4d06, 0x08,
	0x5000, 0x01,
	0x5001, 0x40,
	0x5002, 0x53,
	0x5003, 0x42,
	0x5004, 0x08,
	0x5005, 0x00,
	0x5012, 0x60,
	0x5038, 0x00,
	0x5081, 0x00,
	0x5180, 0x00,
	0x5181, 0x10,
	0x5182, 0x07,
	0x5183, 0x8f,
	0x5184, 0x03,
	0x5208, 0xC2,
	0x5820, 0xc5,
	0x5854, 0x00,
	0x58cb, 0x03,
	0x5bd0, 0x15,
	0x5bd1, 0x02,
	0x5c0e, 0x11,
	0x5c11, 0x00,
	0x5c16, 0x02,
	0x5c17, 0x01,
	0x5c1a, 0x04,
	0x5c1b, 0x03,
	0x5c21, 0x10,
	0x5c22, 0x10,
	0x5c23, 0x04,
	0x5c24, 0x0c,
	0x5c25, 0x04,
	0x5c26, 0x0c,
	0x5c27, 0x04,
	0x5c28, 0x0c,
	0x5c29, 0x04,
	0x5c2a, 0x0c,
	0x5c2b, 0x01,
	0x5c2c, 0x01,
	0x5c2e, 0x08,
	0x5c30, 0x04,
	0x5c35, 0x03,
	0x5c36, 0x03,
	0x5c37, 0x03,
	0x5c38, 0x03,
	0x5d00, 0xff,
	0x5d01, 0x0f,
	0x5d02, 0x80,
	0x5d03, 0x44,
	0x5d05, 0xfc,
	0x5d06, 0x0b,
	0x5d08, 0x10,
	0x5d09, 0x10,
	0x5d0a, 0x04,
	0x5d0b, 0x0c,
	0x5d0c, 0x04,
	0x5d0d, 0x0c,
	0x5d0e, 0x04,
	0x5d0f, 0x0c,
	0x5d10, 0x04,
	0x5d11, 0x0c,
	0x5d12, 0x01,
	0x5d13, 0x01,
	0x5d15, 0x10,
	0x5d16, 0x10,
	0x5d17, 0x10,
	0x5d18, 0x10,
	0x5d1a, 0x10,
	0x5d1b, 0x10,
	0x5d1c, 0x10,
	0x5d1d, 0x10,
	0x5d1e, 0x04,
	0x5d1f, 0x04,
	0x5d20, 0x04,
	0x5d27, 0x64,
	0x5d28, 0xc8,
	0x5d29, 0x96,
	0x5d2a, 0xff,
	0x5d2b, 0xc8,
	0x5d2c, 0xff,
	0x5d2d, 0x04,
	0x5d34, 0x00,
	0x5d35, 0x08,
	0x5d36, 0x00,
	0x5d37, 0x04,
	0x5d4a, 0x00,
	0x5d4c, 0x00,
};

static kal_uint16 ov16a1qqtech_preview_setting[] = {
   //2304x1728@30fps,756Mbps
	0x0305, 0x7a,
	0x0307, 0x01,
	0x4837, 0x15,
	0x0329, 0x01,
	0x0344, 0x01,
	0x0345, 0x2c,
	0x034a, 0x07,
	0x3608, 0x75,
	0x360a, 0x69,
	0x361a, 0x8b,
	0x361e, 0x30,
	0x3639, 0x93,
	0x363a, 0x99,
	0x3642, 0x98,
	0x3654, 0x8a,
	0x3656, 0x0c,
	0x3663, 0x00,
	0x370e, 0x05,
	0x3712, 0x08,
	0x3713, 0xc0,
	0x3714, 0xe2,
	0x37d0, 0x02,
	0x37d1, 0x10,
	0x37db, 0x04,
	0x3808, 0x09,
	0x3809, 0x00,
	0x380a, 0x06,
	0x380b, 0xc0,
	0x380c, 0x03,
	0x380d, 0x84,
	0x380e, 0x0E,
	0x380f, 0x78,
	0x3814, 0x22,
	0x3815, 0x22,
	0x3820, 0x01,
	0x3821, 0x0c,
	0x3822, 0x00,
	0x383c, 0x22,
	0x383f, 0x33,
	0x4015, 0x02,
	0x4016, 0x0d,
	0x4017, 0x00,
	0x4018, 0x07,
	0x401b, 0x1f,
	0x401f, 0xfe,
	0x4500, 0x20,
	0x4501, 0x6a,
	0x4502, 0xe4,
	0x4e05, 0x04,
	0x4e11, 0x06,
	0x4e1d, 0x25,
	0x4e26, 0x44,
	0x4e29, 0x6d,
	0x5000, 0x09,
	0x5001, 0x42,
	0x5003, 0x42,
	0x5820, 0xc5,
	0x5854, 0x00,
	0x5bd0, 0x19,
	0x5c0e, 0x13,
	0x5c11, 0x00,
	0x5c16, 0x01,
	0x5c17, 0x00,
	0x5c1a, 0x00,
	0x5c1b, 0x00,
	0x5c21, 0x08,
	0x5c22, 0x08,
	0x5c23, 0x02,
	0x5c24, 0x06,
	0x5c25, 0x02,
	0x5c26, 0x06,
	0x5c27, 0x02,
	0x5c28, 0x06,
	0x5c29, 0x02,
	0x5c2a, 0x06,
	0x5c2b, 0x00,
	0x5c2c, 0x00,
	0x5d01, 0x07,
	0x5d08, 0x08,
	0x5d09, 0x08,
	0x5d0a, 0x02,
	0x5d0b, 0x06,
	0x5d0c, 0x02,
	0x5d0d, 0x06,
	0x5d0e, 0x02,
	0x5d0f, 0x06,
	0x5d10, 0x02,
	0x5d11, 0x06,
	0x5d12, 0x00,
	0x5d13, 0x00,
	0x3500, 0x00,
	0x3501, 0x07,
	0x3502, 0x34,
	0x3508, 0x01,
	0x3509, 0x00,
};

static kal_uint16 ov16a1qqtech_capture_setting[] = {
	//2304x1728@30fps,756Mbps
	0x0305, 0x7a,
	0x0307, 0x01,
	0x4837, 0x15,
	0x0329, 0x01,
	0x0344, 0x01,
	0x0345, 0x2c,
	0x034a, 0x07,
	0x3608, 0x75,
	0x360a, 0x69,
	0x361a, 0x8b,
	0x361e, 0x30,
	0x3639, 0x93,
	0x363a, 0x99,
	0x3642, 0x98,
	0x3654, 0x8a,
	0x3656, 0x0c,
	0x3663, 0x00,
	0x370e, 0x05,
	0x3712, 0x08,
	0x3713, 0xc0,
	0x3714, 0xe2,
	0x37d0, 0x02,
	0x37d1, 0x10,
	0x37db, 0x04,
	0x3808, 0x09,
	0x3809, 0x00,
	0x380a, 0x06,
	0x380b, 0xc0,
	0x380c, 0x03,
	0x380d, 0x84,
	0x380e, 0x0E,
	0x380f, 0x78,
	0x3814, 0x22,
	0x3815, 0x22,
	0x3820, 0x01,
	0x3821, 0x0c,
	0x3822, 0x00,
	0x383c, 0x22,
	0x383f, 0x33,
	0x4015, 0x02,
	0x4016, 0x0d,
	0x4017, 0x00,
	0x4018, 0x07,
	0x401b, 0x1f,
	0x401f, 0xfe,
	0x4500, 0x20,
	0x4501, 0x6a,
	0x4502, 0xe4,
	0x4e05, 0x04,
	0x4e11, 0x06,
	0x4e1d, 0x25,
	0x4e26, 0x44,
	0x4e29, 0x6d,
	0x5000, 0x09,
	0x5001, 0x42,
	0x5003, 0x42,
	0x5820, 0xc5,
	0x5854, 0x00,
	0x5bd0, 0x19,
	0x5c0e, 0x13,
	0x5c11, 0x00,
	0x5c16, 0x01,
	0x5c17, 0x00,
	0x5c1a, 0x00,
	0x5c1b, 0x00,
	0x5c21, 0x08,
	0x5c22, 0x08,
	0x5c23, 0x02,
	0x5c24, 0x06,
	0x5c25, 0x02,
	0x5c26, 0x06,
	0x5c27, 0x02,
	0x5c28, 0x06,
	0x5c29, 0x02,
	0x5c2a, 0x06,
	0x5c2b, 0x00,
	0x5c2c, 0x00,
	0x5d01, 0x07,
	0x5d08, 0x08,
	0x5d09, 0x08,
	0x5d0a, 0x02,
	0x5d0b, 0x06,
	0x5d0c, 0x02,
	0x5d0d, 0x06,
	0x5d0e, 0x02,
	0x5d0f, 0x06,
	0x5d10, 0x02,
	0x5d11, 0x06,
	0x5d12, 0x00,
	0x5d13, 0x00,
	0x3500, 0x00,
	0x3501, 0x07,
	0x3502, 0x34,
	0x3508, 0x01,
	0x3509, 0x00,
};

static kal_uint16 ov16a1qqtech_hs_video_setting[] = {
	//1920x1080@120fps,1392Mbps
	0x0305, 0x6b,
	0x0307, 0x00,
	0x4837, 0x0b,
	0x0329, 0x01,
	0x0344, 0x01,
	0x0345, 0x2c,
	0x034a, 0x07,
	0x3608, 0x75,
	0x360a, 0x69,
	0x361a, 0x8b,
	0x361e, 0x30,
	0x3639, 0x93,
	0x363a, 0x99,
	0x3642, 0x98,
	0x3654, 0x8a,
	0x3656, 0x0c,
	0x3663, 0x00,
	0x370e, 0x05,
	0x3712, 0x08,
	0x3713, 0xc0,
	0x3714, 0xe2,
	0x37d0, 0x02,
	0x37d1, 0x10,
	0x37db, 0x04,
	0x3808, 0x07,
	0x3809, 0x80,
	0x380a, 0x04,
	0x380b, 0x38,
	0x380c, 0x01,
	0x380d, 0xa9,
	0x380e, 0x07,
	0x380f, 0xaa,
	0x3814, 0x22,
	0x3815, 0x22,
	0x3820, 0x01,
	0x3821, 0x0c,
	0x3822, 0x00,
	0x383c, 0x22,
	0x383f, 0x33,
	0x4015, 0x02,
	0x4016, 0x0d,
	0x4017, 0x00,
	0x4018, 0x07,
	0x401b, 0x1f,
	0x401f, 0xfe,
	0x4500, 0x20,
	0x4501, 0x65,
	0x4502, 0xe4,
	0x4e05, 0x04,
	0x4e11, 0x06,
	0x4e1d, 0x25,
	0x4e26, 0x44,
	0x4e29, 0x6d,
	0x5000, 0x09,
	0x5001, 0x42,
	0x5003, 0x42,
	0x5820, 0xc5,
	0x5854, 0x00,
	0x5bd0, 0x19,
	0x5c0e, 0x13,
	0x5c11, 0x00,
	0x5c16, 0x01,
	0x5c17, 0x00,
	0x5c1a, 0x00,
	0x5c1b, 0x00,
	0x5c21, 0x08,
	0x5c22, 0x08,
	0x5c23, 0x02,
	0x5c24, 0x06,
	0x5c25, 0x02,
	0x5c26, 0x06,
	0x5c27, 0x02,
	0x5c28, 0x06,
	0x5c29, 0x02,
	0x5c2a, 0x06,
	0x5c2b, 0x00,
	0x5c2c, 0x00,
	0x5d01, 0x07,
	0x5d08, 0x08,
	0x5d09, 0x08,
	0x5d0a, 0x02,
	0x5d0b, 0x06,
	0x5d0c, 0x02,
	0x5d0d, 0x06,
	0x5d0e, 0x02,
	0x5d0f, 0x06,
	0x5d10, 0x02,
	0x5d11, 0x06,
	0x5d12, 0x00,
	0x5d13, 0x00,
	0x3500, 0x00,
	0x3501, 0x07,
	0x3502, 0xa2,
	0x3508, 0x01,
	0x3509, 0x00,
};

static kal_uint16 ov16a1qqtech_custom1_setting[] = {
	//2304x1728@60fps,726Mbps
	0x0305, 0x6b,
	0x0307, 0x00,
	0x4837, 0x0b,
	0x0329, 0x01,
	0x0344, 0x01,
	0x0345, 0x2c,
	0x034a, 0x07,
	0x3608, 0x75,
	0x360a, 0x69,
	0x361a, 0x8b,
	0x361e, 0x30,
	0x3639, 0x93,
	0x363a, 0x99,
	0x3642, 0x98,
	0x3654, 0x8a,
	0x3656, 0x0c,
	0x3663, 0x00,
	0x370e, 0x05,
	0x3712, 0x08,
	0x3713, 0xc0,
	0x3714, 0xe2,
	0x37d0, 0x02,
	0x37d1, 0x10,
	0x37db, 0x04,
	0x3808, 0x09,
	0x3809, 0x00,
	0x380a, 0x06,
	0x380b, 0xc0,
	0x380c, 0x03,
	0x380d, 0x84,
	0x380e, 0x07,
	0x380f, 0x3c,
	0x3814, 0x22,
	0x3815, 0x22,
	0x3820, 0x01,
	0x3821, 0x0c,
	0x3822, 0x00,
	0x383c, 0x22,
	0x383f, 0x33,
	0x4015, 0x02,
	0x4016, 0x0d,
	0x4017, 0x00,
	0x4018, 0x07,
	0x401b, 0x1f,
	0x401f, 0xfe,
	0x4500, 0x20,
	0x4501, 0x6a,
	0x4502, 0xe4,
	0x4e05, 0x04,
	0x4e11, 0x06,
	0x4e1d, 0x25,
	0x4e26, 0x44,
	0x4e29, 0x6d,
	0x5000, 0x09,
	0x5001, 0x42,
	0x5003, 0x42,
	0x5820, 0xc5,
	0x5854, 0x00,
	0x5bd0, 0x19,
	0x5c0e, 0x13,
	0x5c11, 0x00,
	0x5c16, 0x01,
	0x5c17, 0x00,
	0x5c1a, 0x00,
	0x5c1b, 0x00,
	0x5c21, 0x08,
	0x5c22, 0x08,
	0x5c23, 0x02,
	0x5c24, 0x06,
	0x5c25, 0x02,
	0x5c26, 0x06,
	0x5c27, 0x02,
	0x5c28, 0x06,
	0x5c29, 0x02,
	0x5c2a, 0x06,
	0x5c2b, 0x00,
	0x5c2c, 0x00,
	0x5d01, 0x07,
	0x5d08, 0x08,
	0x5d09, 0x08,
	0x5d0a, 0x02,
	0x5d0b, 0x06,
	0x5d0c, 0x02,
	0x5d0d, 0x06,
	0x5d0e, 0x02,
	0x5d0f, 0x06,
	0x5d10, 0x02,
	0x5d11, 0x06,
	0x5d12, 0x00,
	0x5d13, 0x00,
	0x3500, 0x00,
	0x3501, 0x07,
	0x3502, 0x34,
	0x3508, 0x01,
	0x3509, 0x00,
};

typedef enum{
	IMGSENSOR_MODE_INIT,
	IMGSENSOR_MODE_PREVIEW,
	IMGSENSOR_MODE_CAPTURE,
	IMGSENSOR_MODE_VIDEO,
	IMGSENSOR_MODE_HIGH_SPEED_VIDEO,
	IMGSENSOR_MODE_SLIM_VIDEO,
	IMGSENSOR_MODE_CUSTOM1,
	IMGSENSOR_MODE_CUSTOM2,
} IMGSENSOR_MODE;

typedef struct imgsensor_mode_struct {
	kal_uint32 pclk;				//record different mode's pclk
	kal_uint32 linelength;			//record different mode's linelength
	kal_uint32 framelength;			//record different mode's framelength

	kal_uint8 startx;				//record different mode's startx of grabwindow
	kal_uint8 starty;				//record different mode's startx of grabwindow

	kal_uint16 grabwindow_width;	//record different mode's width of grabwindow
	kal_uint16 grabwindow_height;	//record different mode's height of grabwindow

	/*	 following for MIPIDataLowPwr2HighSpeedSettleDelayCount by different scenario	*/
	kal_uint8 mipi_data_lp2hs_settle_dc;

	/*	 following for GetDefaultFramerateByScenario()	*/
	kal_uint16 max_framerate;
	kal_uint32 mipi_pixel_rate;

} imgsensor_mode_struct;

/* SENSOR PRIVATE STRUCT FOR VARIABLES*/
typedef struct imgsensor_struct {
	kal_uint8 mirror;				//mirrorflip information

	kal_uint8 sensor_mode;			//record IMGSENSOR_MODE enum value

	kal_uint32 shutter;				//current shutter
	kal_uint16 gain;				//current gain

	kal_uint32 pclk;				//current pclk

	kal_uint32 frame_length;		//current framelength
	kal_uint32 line_length;			//current linelength

	kal_uint32 min_frame_length;	//current min  framelength to max framerate
	kal_uint16 dummy_pixel;			//current dummypixel
	kal_uint16 dummy_line;			//current dummline

	kal_uint16 current_fps;			//current max fps
	kal_bool   autoflicker_en;		//record autoflicker enable or disable
	kal_bool test_pattern;			//record test pattern mode or not
	enum MSDK_SCENARIO_ID_ENUM current_scenario_id;//current scenario id
	kal_uint8  ihdr_en;				//ihdr enable or disable

	kal_uint8 i2c_write_id;			//record current sensor's i2c write id
	struct IMGSENSOR_AE_FRM_MODE ae_frm_mode;
	kal_uint8 current_ae_effective_frame;
	kal_uint8 vendor_id;

} imgsensor_struct;

/* SENSOR PRIVATE STRUCT FOR CONSTANT*/
typedef struct imgsensor_info_struct {
	kal_uint16 sensor_id;			//record sensor id defined in Kd_imgsensor.h
	kal_uint32 checksum_value;		//checksum value for Camera Auto Test
	imgsensor_mode_struct pre;		//preview scenario relative information
	imgsensor_mode_struct cap;		//capture scenario relative information
	imgsensor_mode_struct cap1;		//capture for PIP 24fps relative information, capture1 mode must use same framelength, linelength with Capture mode for shutter calculate
	imgsensor_mode_struct normal_video;//normal video  scenario relative information
	imgsensor_mode_struct hs_video;	//high speed video scenario relative information
	imgsensor_mode_struct slim_video;	//slim video for VT scenario relative information
	imgsensor_mode_struct custom1;	//custom1 scenario relative information
	imgsensor_mode_struct custom2;	//custom2 scenario relative information

	kal_uint8  ae_shut_delay_frame;	//shutter delay frame for AE cycle
	kal_uint8  ae_sensor_gain_delay_frame;	//sensor gain delay frame for AE cycle
	kal_uint8  ae_ispGain_delay_frame;	//isp gain delay frame for AE cycle
	kal_uint8  frame_time_delay_frame;
	kal_uint8  ihdr_support;		//1, support; 0,not support
	kal_uint8  ihdr_le_firstline;	//1,le first ; 0, se first
	kal_uint8  sensor_mode_num;		//support sensor mode num

	kal_uint8  cap_delay_frame;		//enter capture delay frame num
	kal_uint8  pre_delay_frame;		//enter preview delay frame num
	kal_uint8  video_delay_frame;	//enter video delay frame num
	kal_uint8  hs_video_delay_frame;	//enter high speed video  delay frame num
	kal_uint8  slim_video_delay_frame;	//enter slim video delay frame num
	kal_uint8  custom1_delay_frame;	//enter custom1 delay frame num
	kal_uint8  custom2_delay_frame;	//enter custom2 delay frame num

	kal_uint8  margin;				//sensor framelength & shutter margin
	kal_uint32 min_shutter;			//min shutter
	kal_uint32 min_gain;
	kal_uint32 max_gain;
	kal_uint32 min_gain_iso;
	kal_uint32 gain_step;
	kal_uint32 gain_type;
	kal_uint32 max_frame_length;	//max framelength by sensor register's limitation

	kal_uint8  isp_driving_current;	//mclk driving current
	kal_uint8  sensor_interface_type;//sensor_interface_type
	kal_uint8  mipi_sensor_type; //0,MIPI_OPHY_NCSI2; 1,MIPI_OPHY_CSI2, default is NCSI2, don't modify this para
	kal_uint8  mipi_settle_delay_mode; //0, high speed signal auto detect; 1, use settle delay,unit is ns, default is auto detect, don't modify this para
	kal_uint8  sensor_output_dataformat;//sensor output first pixel color
	kal_uint8  mclk;				//mclk value, suggest 24 or 26 for 24Mhz or 26Mhz
	kal_uint32 i2c_speed; /* i2c speed */
	kal_uint8  mipi_lane_num;		//mipi lane num
	kal_uint8  i2c_addr_table[5];	//record sensor support all write id addr, only supprt 4must end with 0xff
//modify by wei.wang2 for IN2 camera performance start
#ifdef CONFIG_RLK_CAM_PERFORMANCE_IMPROVE
	kal_uint32  i2c_speed;
#endif
//modify by wei.wang2 for IN2 camera performance end
} imgsensor_info_struct;

extern int iReadRegI2C(u8 *a_pSendData, u16 a_sizeSendData, u8 *a_pRecvData, u16 a_sizeRecvData, u16 i2cId);
extern int iWriteRegI2C(u8 *a_pSendData, u16 a_sizeSendData, u16 i2cId);
extern int iReadRegI2CTiming(u8 *a_pSendData, u16 a_sizeSendData,
				    u8 *a_pRecvData, u16 a_sizeRecvData,
				    u16 i2cId, u16 timing);

extern int iWriteRegI2CTiming(u8 *a_pSendData, u16 a_sizeSendData,
				     u16 i2cId, u16 timing);

extern int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
					u16 transfer_length, u16 timing);

static kal_uint16 read_cmos_sensor(kal_uint32 addr);
static void write_cmos_sensor(kal_uint32 addr, kal_uint32 para);
 #define PFX "OV16A1QQTECH"
 #define LOG_INF(format, args...)    pr_debug(PFX "[%s] " format, __FUNCTION__, ##args)
#endif
