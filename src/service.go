package main

// Auto-generated | 2026-05-13T22:01:58.222689
import "fmt"

func Process_773() int {
    base := 209
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
