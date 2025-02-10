package main

// Auto-generated | 2026-05-12T03:58:20.250646
import "fmt"

func Process_252() int {
    base := 284
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
