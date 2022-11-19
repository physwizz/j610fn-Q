#ifndef __AUDIO_SLIMSLAVE_H__
#define __AUDIO_SLIMSLAVE_H__

#include <linux/types.h>
#include <linux/ioctl.h>

#define AUDIO_SLIMSLAVE_IOCTL_NAME "audio_slimslave"
#define AUDIO_SLIMSLAVE_MAGIC 'S'

#define AUDIO_SLIMSLAVE_IOCTL_UNVOTE	_IO(AUDIO_SLIMSLAVE_MAGIC, 0x00)
#define AUDIO_SLIMSLAVE_IOCTL_VOTE	_IO(AUDIO_SLIMSLAVE_MAGIC, 0x01)

enum {
	AUDIO_SLIMSLAVE_UNVOTE,
	AUDIO_SLIMSLAVE_VOTE
};

#endif
