package main

// Auto-generated | 2026-05-12T20:45:19.977629
import "fmt"

func Process_893() int {
    base := 170
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_893())
}
