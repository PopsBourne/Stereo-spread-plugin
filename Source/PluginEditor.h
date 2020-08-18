/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class ExpansorStereoAudioProcessorEditor  : public AudioProcessorEditor,
                                            public Slider::Listener
                                            
{
public:
    ExpansorStereoAudioProcessorEditor (ExpansorStereoAudioProcessor&);
    ~ExpansorStereoAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void sliderValueChanged(Slider* slider) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    ExpansorStereoAudioProcessor& processor;

    //BOTONES
    Slider threshold;
    Slider width;
    Slider release;
    Slider pan;
    Slider attack;
    Slider ratio;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ExpansorStereoAudioProcessorEditor)
};
