package main

// Auto-generated | 2026-05-13T20:37:44.507580
import "fmt"

func Process_120() int {
    base := 153
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
