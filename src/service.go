package main

// Auto-generated | 2026-05-11T21:20:46.939959
import "fmt"

func Process_777() int {
    base := 160
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_777())
}
