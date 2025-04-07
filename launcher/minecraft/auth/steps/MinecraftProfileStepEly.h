#pragma once
#include <QObject>
#include <memory>

#include "MinecraftProfileStep.h"
#include "minecraft/auth/AuthStep.h"
#include "net/Download.h"
#include "net/NetJob.h"

class MinecraftProfileStepEly : public MinecraftProfileStep {
    Q_OBJECT

   public:
    explicit MinecraftProfileStepEly(AccountData* data);
    virtual ~MinecraftProfileStepEly() noexcept = default;

    void perform() override;
};
