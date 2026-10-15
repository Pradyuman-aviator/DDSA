class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> ss;

        for(char x :s){
            if(x != '#'){
                st.push(x);
            }
            else if(!st.empty()){
                    st.pop();
            }
        }
        for(char x :t){
            if(x != '#'){
                ss.push(x);
            }
            else if(!ss.empty()){
                    ss.pop();
            }
        }
         string sss = "";
         string ttt= "";
        int i = st.size() -1;
        while(!st.empty()){
            sss.push_back(st.top());
            st.pop();
            i--;

        }

        int j = ss.size() -1;
        while(!ss.empty()){
            ttt.push_back(ss.top());
            ss.pop();
            i--;

        }
        
        if(sss == ttt){
            return true;
        }

        return false;
    }
};

//some errors in stack i am encourting too much time

    Line 12: Char 14: AddressSanitizer:DEADLYSIGNAL ================================================================= ==22==ERROR: AddressSanitizer: SEGV on unknown address (pc 0x55fad28e226f bp 0x7ffe07f349d0 sp 0x7ffe07f34990 T0) ==22==The signal is caused by a READ memory access. ==22==Hint: this fault was caused by a dereference of a high value address (see register values below). Disassemble the provided pc to learn which register was used. #0 0x55fad28e226f in construct_at<char, const char &> /usr/lib/gcc/x86_64-linux-gnu/14/../../../../include/c++/14/bits/stl_construct.h:97:14 #1 0x55fad28e226f in construct<char, const char &> /usr/lib/gcc/x86_64-linux-gnu/14/../../../../include/c++/14/bits/alloc_traits.h:536:4 #2 0x55fad28e226f in void std::deque<char, std::allocator<char>>::_M_push_back_aux<char const&>(char const&) /usr/lib/gcc/x86_64-linux-gnu/14/../../../../include/c++/14/bits/deque.tcc:501:6 #3 0x55fad28e10bc in push /usr/lib/gcc/x86_64-linux-gnu/14/../../../../include/c++/14/bits/stl_stack.h:259:11 #4 0x55fad28e10bc in Solution::backspaceCompare(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>) solution.cpp:12:14 #5 0x55fad28e0cef in __DriverSolution__::__helper__(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>) solution.cpp:12:29 #6 0x55fad28e0338 in main solution.cpp:12:41 #7 0x7f8d3cc721c9 (/lib/x86_64-linux-gnu/libc.so.6+0x2a1c9) (BuildId: 8e9fd827446c24067541ac5390e6f527fb5947bb) #8 0x7f8d3cc7228a in __libc_start_main (/lib/x86_64-linux-gnu/libc.so.6+0x2a28a) (BuildId: 8e9fd827446c24067541ac5390e6f527fb5947bb) #9 0x55fad2809ca4 in _start (solution+0xadca4) ==22==Register values: rax = 0x0000000000000063 rbx = 0x00007ffe07f34a58 rcx = 0x17d7d7d7d7d7d817 rdx = 0x0000506000000278 rdi = 0x0000515000001700 rsi = 0xbebebebebebec0bd rbp = 0x0




    // what to do with this error'

    // Example fix pattern for backspaceCompare using a stack
stack<char> st;
for (char c : s) {
    if (c != '#') {
        st.push(c);
    } else if (!st.empty()) { // <-- Check if empty before popping!
        st.pop();
    }
}

/// this error can be due t=as our stack can eb empty as well

