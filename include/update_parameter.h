

void update_master_volume(double value) {
    sgtl5000_1.volume(value);
}

void update_lfo_rate(double value) {
    lfo.frequency(value);
}

void update_lfo_delay(double value) {
    lfo_envelope.delay(value);
}

void update_osc_lfo_level(double value) {
    osc_lfo_amp.gain(value);
}

void update_pulse_width(double value) {
    if (pwm_lfo_on.state == true) {
        pwm_mixer.gain(0,value); //set lfo pwm level
        pwm_mixer.gain(1,0); //turn off manual pwm
    } else {
        pwm_mixer.gain(1,value); //set manual pwm level
        pwm_mixer.gain(0,0); // turn off lfo pwm
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////

//buttons

void update_pwm_lfo_on(bool value) {
    pulse_width.calculate();
    pulse_width.update();
}

void update_pulse_on() {

}

void update_saw_on() {

}

void update_velocity_on() {

}