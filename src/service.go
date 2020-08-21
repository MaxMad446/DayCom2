package main

// Auto-generated | 2026-05-11T19:40:06.528823
import "fmt"

func Process_579() int {
    base := 240
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_579())
}
