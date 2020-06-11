package main

// Auto-generated | 2026-05-11T19:30:42.893366
import "fmt"

func Process_851() int {
    base := 415
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_851())
}
