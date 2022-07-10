package main

// Auto-generated | 2026-05-14T06:14:29.138890
import "fmt"

func Process_588() int {
    base := 415
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_588())
}
