
#ifndef __AS9700_REG_H__
#define __AS9700_REG_H__

#define AS9700_DISN_ENABLE		(1 << 0)
#define AS9700_DISN_DISABLE	(~(1 << 0))
#define AS9700_DISP_ENABLE		(1 << 1)
#define AS9700_DISP_DISABLE	(~(1 << 1))
#define AS9700_DISN_MASK		(~(1 << 0))
#define AS9700_DISP_MASK		(~(1 << 1))

#define AS9700_ENN_ENABLE		(1 << 4)
#define AS9700_ENN_DISABLE		(~(1 << 4))
#define AS9700_ENP_ENABLE		(1 << 3)
#define AS9700_ENP_DISABLE		(~(1 << 3))
#define AS9700_ENP_IS_ENABLE	(1 << 3)
#define AS9700_ENN_IS_ENABLE	(~(1 << 3))
#define AS9700_ENN_MASK		(~(1 << 4))
#define AS9700_ENP_MASK		(~(1 << 3))


#define MIN_VOLTAGE				4000000
#define MIN_VOLTAGE_VAL			0x00
#define MAX_VOLTAGE_VAL			0x19

#define AS9700_MAX_VOLTAGE		0x19
#define AS9700_MIN_VOLTAGE		0x00

#define N_VOLTAGE				26
#define UV_STEP					100000

typedef struct {
	int voutp;
	int voutn;
	int vout_reg;
} AS_VOUT;

static const AS_VOUT as9700_vout_map[] = {
	{4000000, -4000000, 0x00},
	{4100000, -4100000, 0x01},
	{4200000, -4200000, 0x02},
	{4300000, -4300000, 0x03},
	{4400000, -4400000, 0x04},
	{4500000, -4500000, 0x05},
	{4600000, -4600000, 0x06},
	{4700000, -4700000, 0x07},
	{4800000, -4800000, 0x08},
	{4900000, -4900000, 0x09},
	{5000000, -5000000, 0x0a},
	{5100000, -5100000, 0x0b},
	{5200000, -5200000, 0x0c},
	{5300000, -5300000, 0x0d},
	{5400000, -5400000, 0x0e},
	{5500000, -5500000, 0x0f},
	{5600000, -5600000, 0x10},
	{5700000, -5700000, 0x11},
	{5800000, -5800000, 0x12},
	{5900000, -5900000, 0x13},
	{6000000, -6000000, 0x14},
	{6100000, -6100000, 0x15},
	{6200000, -6200000, 0x16},
	{6300000, -6300000, 0x17},
	{6400000, -6400000, 0x18},
	{6500000, -6500000, 0x19},
};
#endif


