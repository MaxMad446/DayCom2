package main

// Auto-generated | 2026-05-13T20:27:39.882672
import "fmt"

func Process_899() int {
    base := 281
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_899())
}
