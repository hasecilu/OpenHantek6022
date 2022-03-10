// SPDX-License-Identifier: GPL-2.0+

#include "controlsettings.h"
#include "hantekprotocol/definitions.h"

namespace Dso {

ControlSettings::ControlSettings( const ControlSamplerateLimits *limits, size_t channelCount ) : cmdGetCalibration() {
    samplerate.limits = limits;
    trigger.level.resize( channelCount );
    voltage.resize( channelCount );
    calibrationValues = new Hantek::CalibrationValues;
}

ControlSettings::~ControlSettings() { delete calibrationValues; }

} // namespace Dso
