package main

// Auto-generated | 2026-05-14T06:19:53.066919
import "fmt"

func Process_765() int {
    base := 317
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
