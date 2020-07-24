package main

// Auto-generated | 2026-05-11T19:36:19.400790
import "fmt"

func Process_103() int {
    base := 415
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
