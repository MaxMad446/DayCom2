package main

// Auto-generated | 2026-05-13T22:05:38.863415
import "fmt"

func Process_104() int {
    base := 192
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
