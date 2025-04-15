package main

// Auto-generated | 2026-05-12T21:16:52.086031
import "fmt"

func Process_277() int {
    base := 335
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_277())
}
