package main

// Auto-generated | 2026-05-13T20:59:30.936719
import "fmt"

func Process_437() int {
    base := 272
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
