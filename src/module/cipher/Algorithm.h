//
// Created by Alice on 2017.03.01.
//
#pragma once
#ifndef DIFFUSION_UNIT_H
#define DIFFUSION_UNIT_H

#include "Init.h"
#include "../../core/types.h"
#include "../../core/Version.h"
#include "../../core/Version.h"
#include "../../core/Reusable.h"

namespace lc {
    class Algorithm : public Version, public Reusable {

    public:
        virtual void init(Init& init) = 0;

        virtual void run(byte X[], byte* K[]) = 0;

        virtual int identity() = 0;
    };
}
#endif //DIFFUSION_UNIT_H
