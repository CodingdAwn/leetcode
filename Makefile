cc = gcc
xcc = g++

c11 = -std=c++11

cflag = -Wall -g  

objs = main.o common.o maximumSubarray.o

dir = ../dawnLib/dawnBase/Include

_deps = DString.h
deps = $(patsubst %,$(dir)/%,$(_deps))

%.o : %.cpp $(deps)
	$(xcc) $(c11) $(cflag) -I $(dir) -c $< -o $@

algorithm : $(objs)
	#$(xcc) -o algorithm $(objs) libbase.a 
	#-L -l 如果写在-o的前面 一直都链接失败 
	#备注 使用gdb时 如果用gdb --exec=algorithm 没有加载符号表 在gdb中使用file没问题
	$(xcc) $(c11) $(cflag) -o algorithm $(objs) -static -L./../dawnLib/dawnBase/Lib -lbase -g

clean:
	rm -rf algorithm $(objs)
