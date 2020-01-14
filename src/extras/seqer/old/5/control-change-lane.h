#ifndef CONTROL_CHANGE_LANE_INCLUDED
#define CONTROL_CHANGE_LANE_INCLUDED

class ControlChangeLane;

#include <wx/wx.h>
#include "midifile.h"
#include "numeric-value-lane.h"
#include "window.h"

class ControlChangeLane: public NumericValueLane
{
public:
	int controller_number;

	ControlChangeLane(Window* window);
	~ControlChangeLane();
	virtual bool ShouldIncludeEvent(MidiFileEvent_t midi_event);
	virtual int GetValueFromEvent(MidiFileEvent_t midi_event);
};

#endif