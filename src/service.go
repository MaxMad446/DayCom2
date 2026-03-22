package main

// Auto-generated | 2026-05-12T06:16:12.163908
import "fmt"

func Process_732() int {
    base := 107
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
