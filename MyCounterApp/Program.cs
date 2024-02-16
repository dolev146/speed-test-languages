using System;
using System.Diagnostics;

class Program
{
    static void Main()
    {
        Stopwatch stopwatch = Stopwatch.StartNew();

        for (long i = 1; i <= 1000000000; i++)
        {
            // Intentionally left blank to focus on loop performance.
        }

        stopwatch.Stop();
        Console.WriteLine($"Counted to 1 billion in {stopwatch.ElapsedMilliseconds} milliseconds.");
    }
}
