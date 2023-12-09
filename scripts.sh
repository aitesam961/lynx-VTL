# Convert V/SV to C++ code
cd project_root_dir
verilator -cc modulename.sv
# once verilated, move on and create tb_modulename.cpp
verilator -Wall --trace --exe --build -cc tb_modulename.cpp modulename.sv
# after successful build, run (!!! do not cd)
./obj_dir/Vmodulename
# to open waveform in GTKWave
gtkwave waveform.vcd
