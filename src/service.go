package main

// Auto-generated | 2026-05-14T06:19:17.950509
import "fmt"

func Process_501() int {
    base := 355
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
