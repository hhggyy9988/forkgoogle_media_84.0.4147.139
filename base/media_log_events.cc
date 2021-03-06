// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/base/media_log_events.h"

#include <string>

#include "base/notreached.h"

namespace media {

std::string MediaLogEventToString(MediaLogEvent level) {
  switch (level) {
    case MediaLogEvent::kPlay:
      return "PLAY";
    case MediaLogEvent::kPause:
      return "PAUSE";
    case MediaLogEvent::kSeek:
      return "SEEK";
    case MediaLogEvent::kPipelineStateChange:
      return "PIPELINE_STATE_CHANGED";
    case MediaLogEvent::kWebMediaPlayerCreated:
      return "WEBMEDIAPLAYER_CREATED";
    case MediaLogEvent::kWebMediaPlayerDestroyed:
      return "WEBMEDIAPLAYER_DESTROYED";
    case MediaLogEvent::kLoad:
      return "LOAD";
    case MediaLogEvent::kVideoSizeChanged:
      return "VIDEO_SIZE_SET";
    case MediaLogEvent::kDurationChanged:
      return "DURATION_SET";
    case MediaLogEvent::kEnded:
      return "ENDED";
    case MediaLogEvent::kBufferingStateChanged:
      return "BUFFERING_STATE_CHANGE";
    case MediaLogEvent::kSuspended:
      return "SUSPENDED";
  }
  NOTREACHED();
  return "";
}

std::string TruncateUrlString(std::string url) {
  constexpr size_t kMaxUrlLength = 1000;
  if (url.length() > kMaxUrlLength) {
    url.resize(kMaxUrlLength);
    url.replace(url.end() - 3, url.end(), "...");
  }
  return url;
}

}  // namespace media
