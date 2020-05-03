package main

// Auto-generated | 2026-05-11T19:25:51.743552
import "fmt"

func Process_806() int {
    base := 495
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
