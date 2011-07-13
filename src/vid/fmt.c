#include <re.h>
#include <rem_vid.h>


const struct vidfmt_desc vidfmt_descv[VID_FMT_N] = {

	{"yuv420p", 3, 3, { {0, 1}, {1, 1}, {2, 1}, {0, 0} } },
	{"yuyv422", 1, 3, { {0, 2}, {0, 4}, {0, 4}, {0, 0} } },
	{"uyvy422", 1, 3, { {0, 2}, {0, 4}, {0, 4}, {0, 0} } },
	{"rgb32",   1, 4, { {0, 4}, {0, 4}, {0, 4}, {0, 4} } },
	{"argb",    1, 4, { {0, 4}, {0, 4}, {0, 4}, {0, 4} } },
	{"rgb565",  1, 3, { {0, 2}, {0, 2}, {0, 2}, {0, 0} } },
	{"rgb555",  1, 3, { {0, 2}, {0, 2}, {0, 2}, {0, 0} } },
};


const char *vidfmt_name(enum vidfmt fmt)
{
	if (fmt >= VID_FMT_N)
		return "???";

	return vidfmt_descv[fmt].name;
}
