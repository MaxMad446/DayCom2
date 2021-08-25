package main

// Auto-generated | 2026-05-11T20:28:12.499106
import "fmt"

func Process_109() int {
    base := 415
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_109())
}
