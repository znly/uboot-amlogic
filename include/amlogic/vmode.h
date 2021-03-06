
#ifndef VMODE_H
#define VMODE_H

typedef enum vmode_e {
	VMODE_480I = 0,
	VMODE_480I_RPT,
	VMODE_480CVBS,
	VMODE_480P,
	VMODE_480P_RPT,
	VMODE_576I,
	VMODE_576I_RPT,
	VMODE_576CVBS,
	VMODE_576P,
	VMODE_576P_RPT,
	VMODE_720P,
	VMODE_1080I,
	VMODE_1080P,
	VMODE_720P_50HZ,
	VMODE_1080I_50HZ,
	VMODE_1080P_50HZ,
	VMODE_1080P_24HZ,
	VMODE_4K2K_30HZ,
	VMODE_4K2K_25HZ,
	VMODE_4K2K_24HZ,
	VMODE_4K2K_SMPTE,
	VMODE_4K2K_FAKE_5G,
	VMODE_4K2K_60HZ,
	VMODE_4K2K_60HZ_Y420,
	VMODE_4K2K_50HZ,
	VMODE_4K2K_50HZ_Y420,
	VMODE_4K2K_5G,
	VMODE_4K1K_120HZ,
	VMODE_4K1K_120HZ_Y420,
	VMODE_4K1K_100HZ,
	VMODE_4K1K_100HZ_Y420,
	VMODE_4K05K_240HZ,
	VMODE_4K05K_240HZ_Y420,
	VMODE_4K05K_200HZ,
	VMODE_4K05K_200HZ_Y420,
	VMODE_VGA,
	VMODE_SVGA,
	VMODE_XGA,
	VMODE_SXGA,
	VMODE_WSXGA,
	VMODE_FHDVGA,
	VMODE_LCD,
	VMODE_LVDS_1080P,
	VMODE_LVDS_1080P_50HZ,
	VMODE_LVDS_768P,
	VMODE_VX1_4K2K_60HZ,
	VMODE_MAX,
	VMODE_INIT_NULL,
	VMODE_MASK = 0xFF,
} vmode_t;

#endif
