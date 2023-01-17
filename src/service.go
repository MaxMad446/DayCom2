package main

// Auto-generated | 2026-05-13T20:28:11.517842
import "fmt"

func Process_255() int {
    base := 175
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
