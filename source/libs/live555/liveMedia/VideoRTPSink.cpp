/**********
This library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)

This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**********/
// "liveMedia"
// Copyright (c) 1996-2008 Live Networks, Inc.  All rights reserved.
// A generic RTP sink for video codecs (abstract base class)
// Implementation

#include "VideoRTPSink.hh"

VideoRTPSink::VideoRTPSink(UsageEnvironment& env,
			   Groupsock* rtpgs, unsigned char rtpPayloadType,
			   unsigned rtpTimestampFrequency,
			   char const* rtpPayloadFormatName)
  : MultiFramedRTPSink(env, rtpgs, rtpPayloadType, rtpTimestampFrequency,
		       rtpPayloadFormatName) {
}

VideoRTPSink::~VideoRTPSink() {
}

char const* VideoRTPSink::sdpMediaType() const {
  return "video";
}
