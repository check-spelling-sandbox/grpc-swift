/*
 * Copyright 2020, gRPC Authors All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef C_GRPC_ZLIB_H_
#define C_GRPC_ZLIB_H_

#include <zlib.h>

static inline int CGRPCZlib_deflateInit2(z_streamp stream, int level, int method, int windowBits,
                                         int memLevel, int strategy) {
  return deflateInit2(stream, level, method, windowBits, memLevel, strategy);
}

static inline unsigned long CGRPCZlib_deflateBound(z_streamp stream, unsigned long sourceLen) {
  return deflateBound(stream, sourceLen);
}

static inline int CGRPCZlib_deflate(z_streamp stream, int flush) {
  return deflate(stream, flush);
}

static inline int CGRPCZlib_deflateReset(z_streamp stream) {
  return deflateReset(stream);
}

static inline int CGRPCZlib_deflateEnd(z_streamp stream) {
  return deflateEnd(stream);
}

static inline int CGRPCZlib_inflateInit2(z_streamp stream, int windowBits) {
  return inflateInit2(stream, windowBits);
}

static inline int CGRPCZlib_inflate(z_streamp stream, int flush) {
  return inflate(stream, flush);
}

static inline int CGRPCZlib_inflateReset(z_streamp stream) {
  return inflateReset(stream);
}

static inline int CGRPCZlib_inflateEnd(z_streamp stream) {
  return inflateEnd(stream);
}

static inline Bytef *CGRPCZlib_castVoidToBytefPointer(void *in) {
  return (Bytef *) in;
}

#endif  // C_GRPC_ZLIB_H_
