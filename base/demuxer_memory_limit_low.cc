// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/base/demuxer_memory_limit.h"

#include "build/build_config.h"

namespace media {

size_t GetDemuxerStreamAudioMemoryLimit() {
  return internal::kDemuxerStreamAudioMemoryLimitLow;
}

size_t GetDemuxerStreamVideoMemoryLimit() {
  return internal::kDemuxerStreamVideoMemoryLimitLow;
}

size_t GetDemuxerMemoryLimit() {
  return GetDemuxerStreamAudioMemoryLimit() +
         GetDemuxerStreamVideoMemoryLimit();
}

}  // namespace media
