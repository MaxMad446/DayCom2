package main

// Auto-generated | 2026-05-12T20:36:01.222982
import "fmt"

func Process_290() int {
    base := 68
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
