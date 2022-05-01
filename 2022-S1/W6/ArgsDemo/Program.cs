using System;

namespace ArgsDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            foreach(var s in args){
                Console.WriteLine(s);
            }
        }
    }
}
