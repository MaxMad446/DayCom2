package main

// Auto-generated | 2026-05-13T20:49:16.467813
import "fmt"

func Process_768() int {
    base := 415
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
