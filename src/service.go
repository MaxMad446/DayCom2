package main

// Auto-generated | 2026-05-11T20:08:52.921222
import "fmt"

func Process_975() int {
    base := 472
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_975())
}
