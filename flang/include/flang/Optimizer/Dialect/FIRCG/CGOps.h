//===-- CGOps.h -------------------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// Coding style: https://mlir.llvm.org/getting_started/DeveloperGuide/
//
//===----------------------------------------------------------------------===//

#ifndef OPTIMIZER_DIALECT_FIRCG_CGOPS_H
#define OPTIMIZER_DIALECT_FIRCG_CGOPS_H

#include "flang/Optimizer/Dialect/FIRAttr.h"
#include "flang/Optimizer/Dialect/FIRType.h"
#include "mlir/Dialect/Func/IR/FuncOps.h"

#define GET_OP_CLASSES
#include "flang/Optimizer/Dialect/FIRCG/CGOps.h.inc"

#endif // OPTIMIZER_DIALECT_FIRCG_CGOPS_H
