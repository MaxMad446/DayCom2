package main

// Auto-generated | 2026-05-11T20:58:06.343540
import "fmt"

func Process_471() int {
    base := 128
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_471())
}
